//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class COSHorizontalCheckmarkChoiceView;

@interface COSWristSelectionViewController
{
    COSHorizontalCheckmarkChoiceView *_choiceView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000007ebdc
@property(retain, nonatomic) COSHorizontalCheckmarkChoiceView *choiceView; // @synthesize choiceView=_choiceView;
- (void)choiceView:(id)arg1 didSelectChoice:(unsigned long long)arg2;	// IMP=0x001000000007ebb1
- (void)_madeWristSelectionForLeftWrist:(_Bool)arg1;	// IMP=0x001000000007e8ee
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x001000000007e6cd
- (id)suggestedButtonTitle;	// IMP=0x001000000007e661
- (id)imageResource;	// IMP=0x001000000007e5ef
- (_Bool)wantsDefaultImageResource;	// IMP=0x001000000007e5e7
- (id)detailString;	// IMP=0x001000000007e51b
- (id)titleString;	// IMP=0x001000000007e4af
- (void)viewDidLoad;	// IMP=0x001000000007df49
- (_Bool)requiresActivationCheck;	// IMP=0x001000000007df41
- (id)init;	// IMP=0x001000000007def0

@end

