//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCInstallProfileQuestionViewController, NSArray;

@protocol MCProfileQuestionsControllerDelegate
- (_Bool)questionsControllerIsDisplayedInSheet:(MCInstallProfileQuestionViewController *)arg1;
- (void)questionsController:(MCInstallProfileQuestionViewController *)arg1 didFinishWithResponses:(NSArray *)arg2;
- (void)setCurrentQuestionsController:(MCInstallProfileQuestionViewController *)arg1;
@end
