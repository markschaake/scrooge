/**
 * Generated by Scrooge
 *   version: ?
 *   rev: ?
 *   built at: ?
 */
#import <Foundation/Foundation.h>

#import "ApacheThrift/TBase.h"
#import "TFNTwitterThriftGoldCollectionId.h"

@interface TFNTwitterThriftGoldCollectionId : NSObject <TBase, NSCoding>

@property (nonatomic) TFNTwitterThriftGoldCollectionId* collectionId;
@property (nonatomic, readonly) BOOL collectionIdIsSet;


- (instancetype)initWithCollectionId:(TFNTwitterThriftGoldCollectionId*)collectionId;
- (void)read:(id<TProtocol>)inProtocol;
- (void)write:(id<TProtocol>)outProtocol;

@end
