//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SSSStatisticsManager : NSObject
{
}

+ (id)sharedStatisticsManager;	// IMP=0x004000000003697c
- (void)_sendEvent:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x004000000003795c
- (void)didDeleteScreenshots;	// IMP=0x00100000000378c6
- (void)didSaveMixedAllToFiles;	// IMP=0x0010000000037830
- (void)didSaveMixedToPhotosAndFiles;	// IMP=0x001000000003779a
- (void)didSaveFullPagePDFToFiles;	// IMP=0x0010000000037704
- (void)didSaveImageToFiles;	// IMP=0x001000000003766e
- (void)didSaveImageToPhotos;	// IMP=0x00100000000375d8
- (void)didChangeOpacityOnFullPage;	// IMP=0x0010000000037542
- (void)didChangeOpacityOnNormalScreenshot;	// IMP=0x00100000000374ac
- (void)didTapFullPageSegment;	// IMP=0x0010000000037416
- (void)didSubmitFeedbackWithAnnotationCount:(unsigned long long)arg1;	// IMP=0x0010000000037314
- (void)didTapBetaFeedbackButton;	// IMP=0x001000000003727e
- (void)logTotalAnnotations:(unsigned long long)arg1;	// IMP=0x001000000003717c
- (void)drewStrokes:(unsigned long long)arg1;	// IMP=0x001000000003707a
- (void)didAccidentallyDraw;	// IMP=0x0010000000036fe4
- (void)didCropInFullPageMode;	// IMP=0x0010000000036f4e
- (void)didCropInNormalMode;	// IMP=0x0010000000036eb8
- (void)fullscreenExperienceHadCropEvent;	// IMP=0x0010000000036e22
- (void)pipExpanded;	// IMP=0x0010000000036d8c
- (void)pipDragEndedSuccessfully;	// IMP=0x0010000000036cf6
- (void)pipSlidOffscreenDueToTimeout;	// IMP=0x0010000000036c60
- (id)_triggerTypeForPresentationMode:(unsigned long long)arg1;	// IMP=0x0010000000036c35
- (void)screenshotGestureTriggeredWhileAnotherScreenshotWasShowing:(unsigned long long)arg1;	// IMP=0x0010000000036b07
- (void)screenshotGestureTriggered:(unsigned long long)arg1;	// IMP=0x00100000000369d9
- (_Bool)_statisticsEnabled;	// IMP=0x00100000000369d1

@end

