//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, ODDOtherwise;

__attribute__((visibility("hidden")))
@interface ODDChoose
{
    NSMutableArray *mWhens;	// 8 = 0x8
    ODDOtherwise *mOtherwise;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000335822
- (id)description;	// IMP=0x00000000003357e4
- (void)setOtherwise:(id)arg1;	// IMP=0x00000000003357d0
- (id)otherwise;	// IMP=0x00000000003357bb
- (void)addWhen:(id)arg1;	// IMP=0x000000000033579d
- (id)whens;	// IMP=0x0000000000335788
- (id)init;	// IMP=0x000000000033570d

@end
