//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

#import <TipKit/TPKTipContentReusableView-Protocol.h>

@class MISSING_TYPE, TPKContentView;

@interface TPKTipContentCollectionHeaderView : UICollectionReusableView <TPKTipContentReusableView>
{
    MISSING_TYPE *tipView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000031590
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000314f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000313e0
- (void)setContent:(id)arg1 contentController:(id)arg2;	// IMP=0x0000000000031260
- (void)prepareForReuse;	// IMP=0x00000000000310b0
@property(nonatomic, readonly) TPKContentView *tipContentView;
@property(nonatomic, retain) TPKContentView *tipView; // @synthesize tipView;

@end
