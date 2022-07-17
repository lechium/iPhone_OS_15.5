//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <WorkflowUI/WFWorkflowWizardSuggestedPhraseViewDelegate-Protocol.h>

@class NSArray, NSString, UILabel, UIStackView;
@protocol WFWorkflowWizardNameSuggestionCellDelegate;

@interface WFWorkflowWizardNameSuggestionCell : UITableViewCell <WFWorkflowWizardSuggestedPhraseViewDelegate>
{
    id <WFWorkflowWizardNameSuggestionCellDelegate> _delegate;	// 8 = 0x8
    NSArray *_suggestedPhrases;	// 16 = 0x10
    UIStackView *_stackView;	// 24 = 0x18
    UILabel *_infoLabel;	// 32 = 0x20
    NSArray *_suggestionsViews;	// 40 = 0x28
}

+ (id)suggestionsText;	// IMP=0x00000000001a635c
+ (id)suggestionsFont;	// IMP=0x00000000001a633b
+ (id)infoFont;	// IMP=0x00000000001a631a
+ (double)preferredHeightForWidth:(double)arg1 infoText:(id)arg2 suggestedPhrases:(id)arg3;	// IMP=0x00000000001a601b
- (void).cxx_destruct;	// IMP=0x00000000001a5f4c
@property(retain, nonatomic) NSArray *suggestionsViews; // @synthesize suggestionsViews=_suggestionsViews;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(copy, nonatomic) NSArray *suggestedPhrases; // @synthesize suggestedPhrases=_suggestedPhrases;
@property(nonatomic) __weak id <WFWorkflowWizardNameSuggestionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)workflowWizardSuggestedPhraseViewDidSelectSuggestedPhrase:(id)arg1;	// IMP=0x00000000001a5e2d
@property(copy, nonatomic) NSString *infoText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000001a4d8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
