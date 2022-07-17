//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXDispatchTimer, BKSAccelerometer, NSArray, NSDictionary, NSMutableDictionary, NSString, VOTBrailleGestureSpellingSuggestionHandler, VOTBrailleGestureTranslator, VOTTextMovementManager;
@protocol BSInvalidatable, VOTBrailleGestureManagerDelegate;

@interface VOTBrailleGestureManager
{
    VOTBrailleGestureTranslator *_gestureTranslator;	// 8 = 0x8
    VOTBrailleGestureSpellingSuggestionHandler *_spellingSuggestionHandler;	// 16 = 0x10
    BKSAccelerometer *_accelerometer;	// 24 = 0x18
    NSMutableDictionary *_allTouchLocationsByIdentifier;	// 32 = 0x20
    NSMutableDictionary *_firstTouchLocationsByIdentifier;	// 40 = 0x28
    _Bool _shouldUpdateDotPositions;	// 48 = 0x30
    _Bool _exploring;	// 49 = 0x31
    _Bool _splitting;	// 50 = 0x32
    _Bool _didMoveFingersTooFarForInput;	// 51 = 0x33
    _Bool _didAnnounceExplorationMode;	// 52 = 0x34
    _Bool _didAnnounceBrailleTypingProperties;	// 53 = 0x35
    _Bool _didStartFullGesture;	// 54 = 0x36
    _Bool _didEnterInvalidGesture;	// 55 = 0x37
    id <VOTBrailleGestureManagerDelegate> _brailleGestureManagerDelegate;	// 56 = 0x38
    long long _typingMode;	// 64 = 0x40
    long long _keyboardOrientation;	// 72 = 0x48
    NSString *_lastPrintBrailleCharacter;	// 80 = 0x50
    NSDictionary *_lastTouchLocationsByIdentifier;	// 88 = 0x58
    AXDispatchTimer *_speakingDelayTimer;	// 96 = 0x60
    AXDispatchTimer *_brailleTypingPropertiesAnnouncementTimer;	// 104 = 0x68
    AXDispatchTimer *_warningTonesTimer;	// 112 = 0x70
    AXDispatchTimer *_lockScreenDimmingTimer;	// 120 = 0x78
    AXDispatchTimer *_logBSIUsageTimer;	// 128 = 0x80
    id <BSInvalidatable> _disableIdleTimerAssertion;	// 136 = 0x88
    VOTTextMovementManager *_movementManager;	// 144 = 0x90
    NSArray *_calibrationStartTouchPoints;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0020000000121673
@property(retain, nonatomic) NSArray *calibrationStartTouchPoints; // @synthesize calibrationStartTouchPoints=_calibrationStartTouchPoints;
@property(retain, nonatomic) VOTTextMovementManager *movementManager; // @synthesize movementManager=_movementManager;
@property(retain, nonatomic) id <BSInvalidatable> disableIdleTimerAssertion; // @synthesize disableIdleTimerAssertion=_disableIdleTimerAssertion;
@property(retain, nonatomic) AXDispatchTimer *logBSIUsageTimer; // @synthesize logBSIUsageTimer=_logBSIUsageTimer;
@property(retain, nonatomic) AXDispatchTimer *lockScreenDimmingTimer; // @synthesize lockScreenDimmingTimer=_lockScreenDimmingTimer;
@property(nonatomic) _Bool didEnterInvalidGesture; // @synthesize didEnterInvalidGesture=_didEnterInvalidGesture;
@property(nonatomic) _Bool didStartFullGesture; // @synthesize didStartFullGesture=_didStartFullGesture;
@property(retain, nonatomic) AXDispatchTimer *warningTonesTimer; // @synthesize warningTonesTimer=_warningTonesTimer;
@property(retain, nonatomic) AXDispatchTimer *brailleTypingPropertiesAnnouncementTimer; // @synthesize brailleTypingPropertiesAnnouncementTimer=_brailleTypingPropertiesAnnouncementTimer;
@property(retain, nonatomic) AXDispatchTimer *speakingDelayTimer; // @synthesize speakingDelayTimer=_speakingDelayTimer;
@property(retain, nonatomic) NSDictionary *lastTouchLocationsByIdentifier; // @synthesize lastTouchLocationsByIdentifier=_lastTouchLocationsByIdentifier;
@property(copy, nonatomic) NSString *lastPrintBrailleCharacter; // @synthesize lastPrintBrailleCharacter=_lastPrintBrailleCharacter;
@property(nonatomic) long long keyboardOrientation; // @synthesize keyboardOrientation=_keyboardOrientation;
@property(nonatomic) _Bool didAnnounceBrailleTypingProperties; // @synthesize didAnnounceBrailleTypingProperties=_didAnnounceBrailleTypingProperties;
@property(nonatomic) _Bool didAnnounceExplorationMode; // @synthesize didAnnounceExplorationMode=_didAnnounceExplorationMode;
- (void)setDidMoveFingersTooFarForInput:(_Bool)arg1;	// IMP=0x0010000000121452
- (_Bool)didMoveFingersTooFarForInput;	// IMP=0x0010000000121442
@property(nonatomic, getter=isSplitting) _Bool splitting; // @synthesize splitting=_splitting;
@property(nonatomic, getter=isExploring) _Bool exploring; // @synthesize exploring=_exploring;
@property(nonatomic) _Bool shouldUpdateDotPositions; // @synthesize shouldUpdateDotPositions=_shouldUpdateDotPositions;
@property(nonatomic) long long typingMode; // @synthesize typingMode=_typingMode;
@property(nonatomic) __weak id <VOTBrailleGestureManagerDelegate> brailleGestureManagerDelegate; // @synthesize brailleGestureManagerDelegate=_brailleGestureManagerDelegate;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2;	// IMP=0x00100000001212fe
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;	// IMP=0x00100000001212f8
- (void)_cancelWarningTones;	// IMP=0x001000000012129e
- (void)_playWarningTones:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000120fe9
- (void)_playWarningTone;	// IMP=0x0010000000120f71
- (void)_playBonk;	// IMP=0x0010000000120ef9
- (id)_outputRequestForText:(id)arg1 hint:(id)arg2 useKeyboardLanguage:(_Bool)arg3 shouldQueue:(_Bool)arg4 isInsert:(_Bool)arg5 isSuggestion:(_Bool)arg6 isDelete:(_Bool)arg7 speakLiterally:(_Bool)arg8 otherLanguage:(id)arg9;	// IMP=0x001000000012091c
- (void)_speakText:(id)arg1 hint:(id)arg2 useKeyboardLanguage:(_Bool)arg3 shouldQueue:(_Bool)arg4 isInsert:(_Bool)arg5 isSuggestion:(_Bool)arg6 isDelete:(_Bool)arg7 speakLiterally:(_Bool)arg8 otherLanguage:(id)arg9;	// IMP=0x00100000001208b2
- (void)_speakText:(id)arg1 hint:(id)arg2;	// IMP=0x0010000000120889
- (void)_speakText:(id)arg1 useKeyboardLanguage:(_Bool)arg2 shouldQueue:(_Bool)arg3 isInsert:(_Bool)arg4 isDelete:(_Bool)arg5 speakLiterally:(_Bool)arg6;	// IMP=0x001000000012084f
- (void)_speakText:(id)arg1 useKeyboardLanguage:(_Bool)arg2 shouldQueue:(_Bool)arg3;	// IMP=0x0010000000120831
- (void)_speakText:(id)arg1 useKeyboardLanguage:(_Bool)arg2;	// IMP=0x001000000012081c
- (void)_flashInsertedTextIfAllowed:(id)arg1;	// IMP=0x001000000012077f
- (void)_updateBrailleUI;	// IMP=0x0010000000120655
- (void)_handleTouchPoints:(id)arg1;	// IMP=0x001000000012051b
- (void)_handlePrintBraille:(id)arg1;	// IMP=0x001000000011fe95
- (void)_handleBrailleGestureWithLeftPatternDictionary:(id)arg1 rightPatternDictionary:(id)arg2;	// IMP=0x001000000011fd90
- (_Bool)_handleCarriageReturnSwipe;	// IMP=0x001000000011fcf4
- (id)_languageCodeForSpeakingAndBrailleTranslation;	// IMP=0x001000000011fa62
- (id)_languageCodeForSpellChecking;	// IMP=0x001000000011fa04
- (id)_languageCodeForBrailleTable;	// IMP=0x001000000011f937
- (void)_handleTranslateImmediately;	// IMP=0x001000000011f79c
- (void)_handleChangeBrailleMode:(_Bool)arg1;	// IMP=0x001000000011f3a9
- (id)_printBrailleForTouchPoints:(id)arg1;	// IMP=0x001000000011f2b9
- (void)_inputBrailleFromSeriesOfTouchPoints:(id)arg1;	// IMP=0x001000000011f24c
- (void)_inputBrailleFromTouchPoints:(id)arg1;	// IMP=0x001000000011f19d
- (_Bool)_isAdjustTextSegmentTypeEvent:(id)arg1;	// IMP=0x001000000011f0ea
- (_Bool)_isAdjustTextSegmentEvent:(id)arg1;	// IMP=0x001000000011f037
- (_Bool)_isSelectEvent:(id)arg1;	// IMP=0x001000000011ef84
- (_Bool)_isCarriageReturnSwipeEvent:(id)arg1;	// IMP=0x001000000011ef33
- (_Bool)_isToggleLockedConfigurationEvent:(id)arg1;	// IMP=0x001000000011eee2
- (_Bool)_isTranslateImmediatelyEvent:(id)arg1;	// IMP=0x001000000011ee91
- (_Bool)_isPreviousBrailleModeEvent:(id)arg1;	// IMP=0x001000000011ee40
- (_Bool)_isNextBrailleModeEvent:(id)arg1;	// IMP=0x001000000011edef
- (void)_scheduleExploringModeIfNeeded;	// IMP=0x001000000011ec31
- (void)_updateDotNumberCirclesForPrintBraille:(id)arg1;	// IMP=0x001000000011ead5
- (id)_newBrailleInput;	// IMP=0x001000000011ea74
- (long long)valueChangeOriginator;	// IMP=0x001000000011ea69
- (void)_handleFingersOnScreen:(id)arg1 didAddOrRemoveFingers:(_Bool)arg2;	// IMP=0x001000000011e3a9
- (void)_cleanUpTouchesIncludingCalibrationStartPoints:(_Bool)arg1;	// IMP=0x001000000011e2c9
- (_Bool)_handleAllFingersLifted;	// IMP=0x001000000011e018
- (void)_handleCalibrationTimeout;	// IMP=0x001000000011df71
- (id)_spokenStringForPrintBraille:(id)arg1 useLongForm:(_Bool)arg2;	// IMP=0x001000000011dd31
- (id)_spokenStringForPrintBraille:(id)arg1;	// IMP=0x001000000011dd1d
- (void)_enumerateDotNumbersForPrintBraille:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000011dbd4
- (void)_speakPrintBrailleForExploration;	// IMP=0x001000000011d93d
- (void)_calibrateWithTouchPoints:(id)arg1;	// IMP=0x001000000011d897
- (id)_stringWithFirstPart:(id)arg1 secondPart:(id)arg2;	// IMP=0x001000000011d86f
- (void)_endExploringDotPatterns;	// IMP=0x001000000011d830
- (void)_beginExploringDotPatterns;	// IMP=0x001000000011d783
- (id)_touchPointsForCalibrationGivenFirstPoints:(id)arg1 lastPoints:(id)arg2;	// IMP=0x001000000011d6f9
- (_Bool)_isCalibrationEndPattern:(id)arg1;	// IMP=0x001000000011d68b
- (_Bool)_isCalibrationStartPattern:(id)arg1;	// IMP=0x001000000011d61d
- (_Bool)_patternIncludesEveryFinger:(id)arg1;	// IMP=0x001000000011d58e
- (_Bool)_deviceSupportsMoreThanFiveTouches;	// IMP=0x001000000011d584
- (_Bool)_requiresLaTeXInput;	// IMP=0x001000000011d483
- (_Bool)_shouldUseContractedBraille;	// IMP=0x001000000011d466
- (_Bool)_hasContractedBraillePreference;	// IMP=0x001000000011d416
- (_Bool)_canUseContractedBraille;	// IMP=0x001000000011d3d2
- (void)_updateShouldUseContractedBraille;	// IMP=0x001000000011d383
- (void)_updateBrailleTypingPropertiesAndDelayAnnouncement:(_Bool)arg1 forUnlockConfiguration:(_Bool)arg2;	// IMP=0x001000000011ce8f
- (void)_updateBrailleTypingPropertiesAndDelayAnnouncement:(_Bool)arg1;	// IMP=0x001000000011ce7b
- (void)_announceBrailleTypingPropertiesIncludingOrientation:(_Bool)arg1 typingMode:(_Bool)arg2 brailleMode:(_Bool)arg3 forUnlockConfiguration:(_Bool)arg4;	// IMP=0x001000000011cb5a
- (id)_descriptionForCurrentBrailleMode;	// IMP=0x001000000011ca7e
- (void)_appendOrientationToAnnouncement:(id)arg1;	// IMP=0x001000000011c762
- (unsigned long long)_numberOfDots;	// IMP=0x001000000011c745
- (_Bool)_shouldUseEightDotBraille;	// IMP=0x001000000011c6d3
- (void)eventFactoryDidBeginSplitGesture:(id)arg1;	// IMP=0x001000000011c62c
- (id)hintForAppLaunch;	// IMP=0x001000000011c60f
- (_Bool)shouldAllowRotorEvents;	// IMP=0x001000000011c5e8
- (void)didInputWordBackspace;	// IMP=0x001000000011c5cb
- (void)didInputBackspace;	// IMP=0x001000000011c58a
- (_Bool)performCustomWordBackspace;	// IMP=0x001000000011c392
- (_Bool)performCustomBackspace;	// IMP=0x001000000011c208
- (void)applyPreviousSuggestionToElement:(id)arg1;	// IMP=0x001000000011c1f1
- (void)applyNextSuggestionToElement:(id)arg1;	// IMP=0x001000000011c1da
- (void)_applySuggestionToElement:(id)arg1 direction:(long long)arg2;	// IMP=0x001000000011bfed
- (void)_outputChosenSuggestion:(id)arg1;	// IMP=0x001000000011bf2c
- (void)_insertCurrentSelectedSuggestion:(id)arg1;	// IMP=0x001000000011be1b
- (_Bool)performNextBrailleTableCommand;	// IMP=0x001000000011bd27
- (_Bool)isNextBrailleTableEvent:(id)arg1;	// IMP=0x001000000011bcd6
- (_Bool)performNextKeyboardLanguage;	// IMP=0x001000000011bc8f
- (_Bool)isNextKeyboardLanguageEvent:(id)arg1;	// IMP=0x001000000011bc3e
- (_Bool)isLaunchAppEvent:(id)arg1;	// IMP=0x001000000011bbb7
- (_Bool)isPreviousSuggestionEvent:(id)arg1;	// IMP=0x001000000011bb66
- (_Bool)isNextSuggestionEvent:(id)arg1;	// IMP=0x001000000011bb15
- (_Bool)isWordBackspaceEvent:(id)arg1;	// IMP=0x001000000011bac4
- (_Bool)isBackspaceEvent:(id)arg1;	// IMP=0x001000000011ba73
- (_Bool)isSpaceEvent:(id)arg1;	// IMP=0x001000000011ba22
- (_Bool)isReturnKeyEvent:(id)arg1;	// IMP=0x001000000011b9d1
@property(readonly, nonatomic) unsigned long long mode;
- (_Bool)_handleAdjustTextSegmentTypeEvent:(id)arg1;	// IMP=0x000000000011b860
- (_Bool)_shouldReverseDots;	// IMP=0x001000000011b815
- (void)updateWithString:(id)arg1;	// IMP=0x001000000011b788
- (void)_handleWordBreak:(id)arg1;	// IMP=0x001000000011b6b0
- (void)sendCarriageReturnForElement:(id)arg1;	// IMP=0x001000000011b617
- (void)pressReturnKeyForElement:(id)arg1;	// IMP=0x001000000011b42f
- (void)inputSpaceForElement:(id)arg1;	// IMP=0x001000000011b1f7
- (_Bool)processTouchLocations:(id)arg1 isFirstTouch:(_Bool)arg2;	// IMP=0x001000000011b051
- (_Bool)processTapWithFingerCount:(unsigned long long)arg1;	// IMP=0x001000000011b049
- (_Bool)processEvent:(id)arg1;	// IMP=0x001000000011ab64
- (void)clearCurrentString;	// IMP=0x001000000011ab1b
- (void)setActive:(_Bool)arg1;	// IMP=0x001000000011a4c1
- (void)dealloc;	// IMP=0x001000000011a459
- (id)init;	// IMP=0x001000000011a2f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
