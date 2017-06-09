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
 A mutable description of a CCQueryCollectionRequest.

 This is not thread-safe and should typically only be used to create new instances
 of CCQueryCollectionRequest.
 */
@interface CCQueryCollectionRequestDesc : NSObject

/// The Collection Key.
@property (nonatomic) NSString *key;
	
/// A query to define which Objects to return. If not given all Objects in a
/// Collection will be returned. See the Querying a Collection guide at
/// https://docs.chilliconnect.com
@property (nonatomic, nullable) NSString *query;
	
/// Key/value pairs that substitute placeholders in the query. E.g. {"name": "Geoff"}
/// for query "Value.Name = :name". See the Querying a Collection guide at
/// https://docs.chilliconnect.com
@property (nonatomic, nullable) NSDictionary *params;
	
/// An ordered list that define the response sort order. If not given Objects will be
/// ordered by DateCreated ascending.
@property (nonatomic, nullable) NSArray *sortFields;
	
/// Results are paged.
@property (nonatomic, nullable) NSNumber *page;

/*!
 A convenience factory method for creating new instances of CCQueryCollectionRequestDesc
 with the given properties.
 
 @param key The Collection Key.

 @return The new instance.
 */
+ (instancetype)queryCollectionRequestDescWithKey:(NSString *)key;

/*!
 Default init method cannot be called for this class.
 */
-(instancetype) __unavailable init;

/*!
 Initialises with the given properties.
 
 @param key The Collection Key.

 @return The initialised description.
 */
- (instancetype)initWithKey:(NSString *)key NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
