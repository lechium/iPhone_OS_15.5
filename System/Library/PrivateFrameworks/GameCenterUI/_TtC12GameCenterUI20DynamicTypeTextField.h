//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextField.h>

@class MISSING_TYPE, UIFont;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI20DynamicTypeTextField : UITextField
{
    MISSING_TYPE *fontUseCaseContentSizeCategory;	// 8 = 0x8
    MISSING_TYPE *fontUseCase;	// 4434856 = 0x43aba8
    MISSING_TYPE *directionalTextAlignment;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000036b400
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000036b320
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000036b270
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x000000000036b1c0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000036b040
@property(nonatomic) long long textAlignment;
@property(nonatomic, retain) UIFont *font;
@property(nonatomic, readonly) long long jet_textLength;
@property(nonatomic, readonly) struct UIEdgeInsets jet_languageAwareOutsets;
@property(nonatomic, readonly) _Bool jet_isTextExtraTall;

@end

