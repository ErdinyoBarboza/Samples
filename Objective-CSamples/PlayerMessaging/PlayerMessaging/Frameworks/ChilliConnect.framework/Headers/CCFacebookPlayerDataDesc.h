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
 A mutable description of a CCFacebookPlayerData.

 This is not thread-safe and should typically only be used to create new instances
 of CCFacebookPlayerData.
 */
@interface CCFacebookPlayerDataDesc : NSObject

/// The ChilliConnectID of the Facebook friend.
@property (nonatomic) NSString *chilliConnectId;
	
/// The requested Custom Data Key.
@property (nonatomic) NSString *key;
	
/// The value of the Custom Data Key.
@property (nonatomic) SCMultiTypeValue *value;
	
/// The player's UserName.
@property (nonatomic, nullable) NSString *userName;
	
/// The player's DisplayName.
@property (nonatomic, nullable) NSString *displayName;
	
/// The player's Facebook name.
@property (nonatomic) NSString *facebookName;
	
/// The Date the Key was first created. Format: ISO8601 e.g. 2016-01-12T11:08:23.
@property (nonatomic) NSDate *dateCreated;
	
/// The Date the Key was last updated. Format: ISO8601 e.g. 2016-01-12T11:08:23.
@property (nonatomic) NSDate *dateModified;

/*!
 A convenience factory method for creating new instances of CCFacebookPlayerDataDesc
 with the given properties.
 
 @param chilliConnectId The ChilliConnectID of the Facebook friend.
 @param key The requested Custom Data Key.
 @param value The value of the Custom Data Key.
 @param facebookName The player's Facebook name.
 @param dateCreated The Date the Key was first created. Format: ISO8601 e.g. 2016-01-12T11:08:23.
 @param dateModified The Date the Key was last updated. Format: ISO8601 e.g. 2016-01-12T11:08:23.

 @return The new instance.
 */
+ (instancetype)facebookPlayerDataDescWithChilliConnectId:(NSString *)chilliConnectId key:(NSString *)key value:(SCMultiTypeValue *)value facebookName:(NSString *)facebookName dateCreated:(NSDate *)dateCreated dateModified:(NSDate *)dateModified;

/*!
 Default init method cannot be called for this class.
 */
-(instancetype) __unavailable init;

/*!
 Initialises with the given properties.
 
 @param chilliConnectId The ChilliConnectID of the Facebook friend.
 @param key The requested Custom Data Key.
 @param value The value of the Custom Data Key.
 @param facebookName The player's Facebook name.
 @param dateCreated The Date the Key was first created. Format: ISO8601 e.g. 2016-01-12T11:08:23.
 @param dateModified The Date the Key was last updated. Format: ISO8601 e.g. 2016-01-12T11:08:23.

 @return The initialised description.
 */
- (instancetype)initWithChilliConnectId:(NSString *)chilliConnectId key:(NSString *)key value:(SCMultiTypeValue *)value facebookName:(NSString *)facebookName dateCreated:(NSDate *)dateCreated dateModified:(NSDate *)dateModified NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
