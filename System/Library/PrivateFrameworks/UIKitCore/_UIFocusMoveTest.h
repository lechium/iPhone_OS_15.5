//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol UIFocusEnvironment, _UIFocusMoveTestDataSource, _UIFocusMoveTestDelegate;

@interface _UIFocusMoveTest
{
    unsigned long long _activeNumberOfIterations;	// 8 = 0x8
    unsigned long long _currentIteration;	// 16 = 0x10
    unsigned long long _currentMove;	// 24 = 0x18
    struct {
        unsigned int isPerformingFocusMovement:1;
        unsigned int delegateRespondsToWillStartIteration:1;
        unsigned int delegateRespondsToDidFinishIteration:1;
        unsigned int delegateRespondsToWillMoveFocusAlongHeadingForMoveDuringIteration:1;
        unsigned int delegateRespondsToDidMoveFocusAlongHeadingForMoveDuringIteration:1;
        unsigned int dataSourceRespondsToNumberOfIterations:1;
        unsigned int dataSourceRespondsToMaximumNumberOfMovesDuringIteration:1;
        unsigned int dataSourceRespondsToDelayBeforeMoveDuringIteration:1;
        unsigned int dataSourceRespondsToHeadingForMoveDuringIteration:1;
        unsigned int dataSourceRespondsToShouldResetFocusBeforeIteration:1;
    } _flags;	// 32 = 0x20
    _Bool _resetsFocusBeforeIterations;	// 36 = 0x24
    id <UIFocusEnvironment> _containerFocusEnvironment;	// 40 = 0x28
    unsigned long long _numberOfIterations;	// 48 = 0x30
    unsigned long long _maximumMovesPerIteration;	// 56 = 0x38
    double _movementDelay;	// 64 = 0x40
    unsigned long long _movementHeading;	// 72 = 0x48
    id <_UIFocusMoveTestDataSource> _dataSource;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000676727
@property(nonatomic) __weak id <_UIFocusMoveTestDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool resetsFocusBeforeIterations; // @synthesize resetsFocusBeforeIterations=_resetsFocusBeforeIterations;
@property(nonatomic) unsigned long long movementHeading; // @synthesize movementHeading=_movementHeading;
@property(nonatomic) double movementDelay; // @synthesize movementDelay=_movementDelay;
@property(nonatomic) unsigned long long maximumMovesPerIteration; // @synthesize maximumMovesPerIteration=_maximumMovesPerIteration;
@property(nonatomic) unsigned long long numberOfIterations; // @synthesize numberOfIterations=_numberOfIterations;
@property(nonatomic) __weak id <UIFocusEnvironment> containerFocusEnvironment; // @synthesize containerFocusEnvironment=_containerFocusEnvironment;
- (_Bool)_dataSourceShouldResetFocusBeforeIteration:(unsigned long long)arg1;	// IMP=0x00000000006765b9
- (unsigned long long)_dataSourceHeadingForMove:(unsigned long long)arg1 duringIteration:(unsigned long long)arg2;	// IMP=0x000000000067652c
- (double)_dataSourceDelayBeforeMove:(unsigned long long)arg1 duringIteration:(unsigned long long)arg2;	// IMP=0x000000000067649b
- (unsigned long long)_dataSourceMaximumNumberOfMovesDuringIteration:(unsigned long long)arg1;	// IMP=0x000000000067641e
- (unsigned long long)_dataSourceNumberOfIterations;	// IMP=0x00000000006763a6
- (void)_notifyDelegateDidMoveFocusAlongHeading:(unsigned long long)arg1 forMove:(unsigned long long)arg2 duringIteration:(unsigned long long)arg3;	// IMP=0x0000000000676205
- (void)_notifyDelegateWillMoveFocusAlongHeading:(unsigned long long)arg1 forMove:(unsigned long long)arg2 duringIteration:(unsigned long long)arg3;	// IMP=0x000000000067618c
- (void)_notifyDelegateDidFinishIteration:(unsigned long long)arg1;	// IMP=0x0000000000676128
- (void)_notifyDelegateWillStartIteration:(unsigned long long)arg1;	// IMP=0x00000000006760c4
@property(nonatomic) __weak id <_UIFocusMoveTestDelegate> delegate;
- (void)_resetFocusIfNecessaryBeforeIteration:(unsigned long long)arg1;	// IMP=0x0000000000675ecb
- (void)_performFocusMovement;	// IMP=0x0000000000675bfc
- (void)_performFocusMovementAfterDelayForMove:(unsigned long long)arg1 iteration:(unsigned long long)arg2;	// IMP=0x0000000000675aff
- (void)main;	// IMP=0x0000000000675ad9
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006759f6
- (void)reset;	// IMP=0x00000000006759a2
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000675927

@end
