//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SGSqlEntityStore;

@interface SGServiceContext : NSObject
{
    SGSqlEntityStore *_store;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001ee28f
@property(readonly, nonatomic) SGSqlEntityStore *store; // @synthesize store=_store;
- (id)initWithStore:(id)arg1;	// IMP=0x00000000001ee21a
- (id)init;	// IMP=0x00000000001ee193

@end

