//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPass, PKPassSnapshotter, UIImageView;

@interface PKPerformActionPassView
{
    PKPass *_pass;	// 16 = 0x10
    PKPassSnapshotter *_snapshotter;	// 24 = 0x18
    UIImageView *_passView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000013f279
- (struct CGSize)_passImageSize;	// IMP=0x000000000013f22f
- (void)_loadSnapshotView;	// IMP=0x000000000013f0e2
- (void)_createSubviews;	// IMP=0x000000000013ef24
- (void)smallShakeImage;	// IMP=0x000000000013ef05
- (void)shakeImage;	// IMP=0x000000000013eee6
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000013eeb9
- (void)layoutSubviews;	// IMP=0x000000000013edef
- (void)configureWithPass:(id)arg1 frame:(struct CGRect)arg2;	// IMP=0x000000000013ece6
- (id)initWithPass:(id)arg1 frame:(struct CGRect)arg2;	// IMP=0x000000000013ebaa
- (id)init;	// IMP=0x000000000013eb7b

@end

