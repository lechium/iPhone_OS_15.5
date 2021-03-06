//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSDate, NSDateFormatter, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSMutableIndexSet, OSLogEventStreamBase, UIActivityIndicatorView, UITextView;

@interface PXLogsViewController : UIViewController
{
    NSArray *_subsystemsAndCategories;	// 8 = 0x8
    NSDate *_startDate;	// 16 = 0x10
    UITextView *_textView;	// 24 = 0x18
    UIActivityIndicatorView *_spinnerView;	// 32 = 0x20
    OSLogEventStreamBase *_eventStream;	// 40 = 0x28
    NSMutableAttributedString *_fullAttributedString;	// 48 = 0x30
    _Bool _hasScheduledTextViewUpdate;	// 56 = 0x38
    NSMutableArray *_compactLogs;	// 64 = 0x40
    NSMutableArray *_expandedLogs;	// 72 = 0x48
    NSMutableIndexSet *_isExpanded;	// 80 = 0x50
    NSMutableDictionary *_substitutionByObjectRepresentation;	// 88 = 0x58
    NSMutableDictionary *_nextAvailableIndexByClassName;	// 96 = 0x60
    NSDateFormatter *_dateFormatter;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000007fdca8
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (id)substitutionForCollectionRepresentation:(id)arg1 attributes:(id)arg2;	// IMP=0x00000000007fda8b
- (_Bool)isCollectionRepresentation:(id)arg1;	// IMP=0x00000000007fda2a
- (id)substitutionForObjectRepresentation:(id)arg1;	// IMP=0x00000000007fd7e8
- (void)toggleModeForStringIndex:(unsigned long long)arg1;	// IMP=0x00000000007fd663
- (void)logAttributedString:(id)arg1;	// IMP=0x00000000007fd586
- (void)removeSpinner;	// IMP=0x00000000007fd54e
- (void)setupEventStream:(id)arg1;	// IMP=0x00000000007fd0ef
- (id)subsystemsAndCategoriesPredicateWithSubsystemsAndCategories:(id)arg1;	// IMP=0x00000000007fcc0a
- (void)prepareLiveStore;	// IMP=0x00000000007fcb85
- (void)prepareDiskStore;	// IMP=0x00000000007fcb00
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000007fcaad
- (void)viewDidLoad;	// IMP=0x00000000007fc650
- (void)tapped:(id)arg1;	// IMP=0x00000000007fc4a1
- (id)initLiveWithSubsystem:(id)arg1 category:(id)arg2;	// IMP=0x00000000007fc3c7
- (id)initLiveWithSubsystemsAndCategories:(id)arg1;	// IMP=0x00000000007fc355
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 startDate:(id)arg3;	// IMP=0x00000000007fc25a
- (id)initWithSubsystemsAndCategories:(id)arg1 startDate:(id)arg2;	// IMP=0x00000000007fc17f

@end

