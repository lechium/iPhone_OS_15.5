//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDSBackingStoreDictionaryContext, NSDictionary;

@protocol DNDSBackingStoreRecord <NSObject>
+ (id)newWithDictionaryRepresentation:(NSDictionary *)arg1 context:(DNDSBackingStoreDictionaryContext *)arg2;
- (NSDictionary *)dictionaryRepresentationWithContext:(DNDSBackingStoreDictionaryContext *)arg1;
@end

