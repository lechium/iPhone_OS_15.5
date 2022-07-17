//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPCommentQuestion, UIImage;

__attribute__((visibility("hidden")))
@interface RAPProblemNotListedQuestion
{
    NSString *_localizedTitle;	// 8 = 0x8
    NSString *_localizedServerControlledDescription;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000003f4fdd
@property(copy, nonatomic) NSString *localizedServerControlledDescription; // @synthesize localizedServerControlledDescription=_localizedServerControlledDescription;
@property(readonly, nonatomic) int userAction;
- (void)_fillSubmissionParameters:(id)arg1;	// IMP=0x00000000003f4f4c
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2;	// IMP=0x00100000003f4e82
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 localizedTitle:(id)arg3;	// IMP=0x00100000003f4d08
@property(readonly, nonatomic) RAPCommentQuestion *commentQuestion;
@property(readonly, nonatomic) int analyticTarget;
@property(readonly, nonatomic) long long questionCategory;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
