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
 A mutable description of a CCGetScoresForChilliConnectIdsRequest.

 This is not thread-safe and should typically only be used to create new instances
 of CCGetScoresForChilliConnectIdsRequest.
 */
@interface CCGetScoresForChilliConnectIdsRequestDesc : NSObject

/// The Key that identifies the leaderboard
@property (nonatomic) NSString *key;
	
/// A list of ChilliConnectIDs to find scores for. Maximum 100.
@property (nonatomic) NSArray *chilliConnectIds;
	
/// If true, include the currently logged in player's score in the results. If not
/// provided, this will be defaulted to false.
@property (nonatomic, nullable) NSNumber *includeMe;

/*!
 A convenience factory method for creating new instances of CCGetScoresForChilliConnectIdsRequestDesc
 with the given properties.
 
 @param key The Key that identifies the leaderboard
 @param chilliConnectIds A list of ChilliConnectIDs to find scores for. Maximum 100.

 @return The new instance.
 */
+ (instancetype)getScoresForChilliConnectIdsRequestDescWithKey:(NSString *)key chilliConnectIds:(NSArray *)chilliConnectIds;

/*!
 Default init method cannot be called for this class.
 */
-(instancetype) __unavailable init;

/*!
 Initialises with the given properties.
 
 @param key The Key that identifies the leaderboard
 @param chilliConnectIds A list of ChilliConnectIDs to find scores for. Maximum 100.

 @return The initialised description.
 */
- (instancetype)initWithKey:(NSString *)key chilliConnectIds:(NSArray *)chilliConnectIds NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
