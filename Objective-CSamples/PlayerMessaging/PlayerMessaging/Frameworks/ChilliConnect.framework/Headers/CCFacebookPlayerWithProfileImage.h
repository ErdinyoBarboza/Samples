//
//  This file was auto-generated using the ChilliConnect SDK Generator.
//
//  The MIT License (MIT)
//
//  Copyright (c) 2015 Tag Games Ltd
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

@import Foundation;

#import "ForwardDeclarations.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 A container for information on a player. This includes the ChilliConnectID of the
 account, as well as information such as the UserName, DisplayName, FacebookID,
 FacebookName and FacebookProfileImage.

 This is immutable after construction and is therefore thread safe.
 */
@interface CCFacebookPlayerWithProfileImage : NSObject

/// The player's ChilliConnectID.
@property (readonly) NSString *chilliConnectId;
	
/// The player's UserName.
@property (readonly, nullable) NSString *userName;
	
/// The player's DisplayName.
@property (readonly, nullable) NSString *displayName;
	
/// The player's FacebookID.
@property (readonly) NSString *facebookId;
	
/// The player's Facebook Name.
@property (readonly) NSString *facebookName;
	
/// The player's Facebook profile image URL.
@property (readonly) NSString *facebookProfileImage;

/*!
 A convenience factory method for creating new instances of CCFacebookPlayerWithProfileImage
 with the given description.
 
 @param desc The description to build the new instance from.

 @return The new instance.
 */
+ (instancetype)facebookPlayerWithProfileImageWithDesc:(CCFacebookPlayerWithProfileImageDesc *)desc;

/*!
 Convenience factory method for creating new instances of CCFacebookPlayerWithProfileImage
 from the contents of the given Json dictionary.
 
 @param dictionary The properties of the object in dictionary form. Typically this
        is created from Json.
 
 @return The new instance.
 */
+ (instancetype)facebookPlayerWithProfileImageWithJson:(NSDictionary *)dictionary;

/*!
 Default init method cannot be called for this class.
 */
-(instancetype) __unavailable init;

/*!
 Initialises with the given description.
 
 @param desc The description to build the new instance from.

 @return The initialised object.
 */
- (instancetype)initWithDesc:(CCFacebookPlayerWithProfileImageDesc *)desc NS_DESIGNATED_INITIALIZER;

/*!
 Initialise with the contents of the given dictionary.
 
 @param dictionary The properties of the object in dictionary form. Typically this
        is created from Json.
 
 @return The initialised object.
 */
- (instancetype)initWithDictionary:(NSDictionary *)dictionary NS_DESIGNATED_INITIALIZER;

/*!
 Serialises all properties. The output will be a dictionary containing the objects 
 properties in a form that can easily be converted to Json. 
 
 @return The serialised object in dictionary form. 
 */
 - (NSDictionary *)serialise;
 
@end

NS_ASSUME_NONNULL_END
