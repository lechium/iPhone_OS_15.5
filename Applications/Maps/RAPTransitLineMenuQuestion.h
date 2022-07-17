//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKMapItem, NSArray, NSString, RAPCommentQuestion, RAPTransitLine, UIImage;

__attribute__((visibility("hidden")))
@interface RAPTransitLineMenuQuestion
{
    NSArray *_choices;	// 24 = 0x18
    RAPTransitLine *_reportedLine;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000705566
@property(readonly, nonatomic) RAPTransitLine *reportedLine; // @synthesize reportedLine=_reportedLine;
- (void)_fillSubmissionParameters:(id)arg1;	// IMP=0x00100000007051d6
@property(readonly, nonatomic) int userAction;
- (id)followUpQuestionForCategory:(long long)arg1;	// IMP=0x0010000000705107
- (id)mainMenuQuestionCategories;	// IMP=0x00100000007050cf
@property(readonly, nonatomic) long long questionCategory;
- (id)_localizedCommentPlaceholderText;	// IMP=0x001000000070505c
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) RAPTransitLine *snippetTransitLine;
@property(readonly, nonatomic) long long snippetStyle;
- (int)analyticTarget;	// IMP=0x0010000000704fc9
- (void)setSelectedChoice:(id)arg1;	// IMP=0x0010000000704eff
@property(readonly, nonatomic) NSArray *choices;
@property(readonly, nonatomic) RAPCommentQuestion *commentQuestion;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 reportedLine:(id)arg3 selectedQuestionCategory:(long long)arg4;	// IMP=0x0010000000704b0c
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 reportedLine:(id)arg3;	// IMP=0x0010000000704af4
- (id)initWithReport:(id)arg1 reportedLine:(id)arg2;	// IMP=0x0010000000704add

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(copy, nonatomic) NSString *localizedServerControlledDescription;
@property(readonly, nonatomic) MKMapItem *snippetMapItem;
@property(readonly) Class superclass;

@end
