//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPDisclosureIndicatorSection, RAPReportComposerTransitLinePickerPart, RAPTablePart, RAPTransitLineSelectionQuestion;

__attribute__((visibility("hidden")))
@interface RAPReportComposerTransitLineProblemViewController
{
    RAPTransitLineSelectionQuestion *_question;	// 8 = 0x8
    RAPReportComposerTransitLinePickerPart *_whichLinePart;	// 16 = 0x10
    RAPTablePart *_problemPart;	// 24 = 0x18
    RAPDisclosureIndicatorSection *_problemSection;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000353465
- (void)proceedToLineShapeIncorrectQuestion:(id)arg1;	// IMP=0x001000000035339c
- (void)proceedToSchedulesIncorrectQuestion:(id)arg1;	// IMP=0x00100000003532d3
- (void)proceedToLineNameIncorrectQuestion:(id)arg1;	// IMP=0x001000000035320a
- (void)proceedToNextQuestion:(id)arg1;	// IMP=0x001000000035312c
- (id)_problemSection;	// IMP=0x0010000000352e72
- (void)_instrumentLineSelection;	// IMP=0x0010000000352dcf
- (id)tablePartsAfterDownload;	// IMP=0x0010000000352aad
- (void)downloadAndDisplayTransitLines;	// IMP=0x001000000035297b
- (id)tableParts;	// IMP=0x00100000003528eb
@property(readonly, nonatomic) int analyticTarget;
- (void)dealloc;	// IMP=0x0010000000352894
- (id)initWithReport:(id)arg1 lineQuestion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003527d3

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

