//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPAutoCompleteSearchQuestion, RAPReportComposerCommentPart, RAPTableCollapsableCheckmarkSection, RAPTablePart, RAPTablePartSection;

__attribute__((visibility("hidden")))
@interface RAPReportComposerAutoCompleteSearchViewController
{
    RAPAutoCompleteSearchQuestion *_question;	// 8 = 0x8
    RAPTableCollapsableCheckmarkSection *_searchIssueKindSection;	// 16 = 0x10
    RAPTablePart *_searchIssueKindPart;	// 24 = 0x18
    RAPReportComposerCommentPart *_commentPart;	// 32 = 0x20
    RAPTablePartSection *_commentSection;	// 40 = 0x28
    CDUnknownBlockType _completion;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000010abca
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) RAPTablePartSection *commentSection; // @synthesize commentSection=_commentSection;
@property(retain, nonatomic) RAPReportComposerCommentPart *commentPart; // @synthesize commentPart=_commentPart;
@property(retain, nonatomic) RAPTablePart *searchIssueKindPart; // @synthesize searchIssueKindPart=_searchIssueKindPart;
@property(retain, nonatomic) RAPTableCollapsableCheckmarkSection *searchIssueKindSection; // @synthesize searchIssueKindSection=_searchIssueKindSection;
@property(retain, nonatomic) RAPAutoCompleteSearchQuestion *question; // @synthesize question=_question;
- (void)_instrumentSearchSelection;	// IMP=0x001000000010aa88
- (id)tableParts;	// IMP=0x001000000010a3b6
- (void)didTapOnCancel;	// IMP=0x001000000010a340
@property(readonly, nonatomic) int analyticTarget;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000010a291
- (id)initWithSearchQuery:(id)arg1 report:(id)arg2 question:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000109fa7

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
