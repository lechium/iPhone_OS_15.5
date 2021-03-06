//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, PUTilingDataSource;

@interface PUTilingViewUpdateItem : NSObject
{
    long long _action;	// 8 = 0x8
    NSIndexPath *_indexPathBeforeUpdate;	// 16 = 0x10
    NSIndexPath *_indexPathAfterUpdate;	// 24 = 0x18
    PUTilingDataSource *_dataSource;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000456224
@property(readonly, nonatomic) PUTilingDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSIndexPath *indexPathAfterUpdate; // @synthesize indexPathAfterUpdate=_indexPathAfterUpdate;
@property(readonly, nonatomic) NSIndexPath *indexPathBeforeUpdate; // @synthesize indexPathBeforeUpdate=_indexPathBeforeUpdate;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
- (id)transformedIndexPath:(id)arg1 withDataSource:(id)arg2;	// IMP=0x0000000000455fb0
- (id)initWithAction:(long long)arg1 indexPathBeforeUpdate:(id)arg2 indexPathAfterUpdate:(id)arg3 dataSource:(id)arg4;	// IMP=0x0000000000455c1b

@end

