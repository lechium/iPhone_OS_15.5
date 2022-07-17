//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHAttribution, SHMediaLibraryController;
@protocol SHMediaLibrarySyncDelegate, SHServiceDelegate;

__attribute__((visibility("hidden")))
@interface SHMediaLibrarySyncService : NSObject
{
    _Bool _isRunning;	// 8 = 0x8
    id <SHServiceDelegate> _serviceDelegate;	// 16 = 0x10
    SHMediaLibraryController *_libraryController;	// 24 = 0x18
    id <SHMediaLibrarySyncDelegate> _delegate;	// 32 = 0x20
    SHAttribution *_attribution;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000370cf
@property(readonly, nonatomic) SHAttribution *attribution; // @synthesize attribution=_attribution;
@property(nonatomic) __weak id <SHMediaLibrarySyncDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) __weak id <SHServiceDelegate> serviceDelegate; // @synthesize serviceDelegate=_serviceDelegate;
- (void)updateSnapshotWithAttribution:(id)arg1;	// IMP=0x0010000000036ce5
- (void)setLibraryController:(id)arg1;	// IMP=0x0010000000036cd4
@property(readonly, nonatomic) SHMediaLibraryController *libraryController; // @synthesize libraryController=_libraryController;
- (double)timeRequiredToPerformWork;	// IMP=0x0010000000036c1e
@property(readonly, nonatomic) _Bool managesRecordingSession;
- (oneway void)stop;	// IMP=0x0010000000036bfc
- (id)requiredEntitlements;	// IMP=0x0010000000036bef
- (void)setIsRunning:(_Bool)arg1;	// IMP=0x0010000000036b9a
- (void)_libraryDidCompleteSync:(id)arg1;	// IMP=0x0010000000036b2b
- (void)_library:(id)arg1 didProduceError:(id)arg2 failedItemIdentifiers:(id)arg3;	// IMP=0x0010000000036aa2
- (void)_library:(id)arg1 didChangeWithSnapshot:(id)arg2;	// IMP=0x0010000000036a2d
- (void)_libraryWillBeginSync:(id)arg1;	// IMP=0x00100000000369e1
- (void)_synchronizeSnapshot:(id)arg1 startCondition:(id)arg2;	// IMP=0x00100000000368fc
- (id)initWithAttribution:(id)arg1;	// IMP=0x0010000000036891

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
