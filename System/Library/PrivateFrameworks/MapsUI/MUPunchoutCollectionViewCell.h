//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

#import <MapsUI/MKActivityObserving-Protocol.h>

@class MUPunchoutView, MUPunchoutViewModel, NSString;

__attribute__((visibility("hidden")))
@interface MUPunchoutCollectionViewCell : UICollectionViewCell <MKActivityObserving>
{
    MUPunchoutView *_punchoutView;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x000000000002ade5
- (void).cxx_destruct;	// IMP=0x000000000002adf7
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;	// IMP=0x000000000002adc8
- (void)beginAnimatingActivityIndicator;	// IMP=0x000000000002adab
@property(retain, nonatomic) MUPunchoutViewModel *viewModel;
- (void)_setupContentView;	// IMP=0x000000000002ac22
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002abc5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
