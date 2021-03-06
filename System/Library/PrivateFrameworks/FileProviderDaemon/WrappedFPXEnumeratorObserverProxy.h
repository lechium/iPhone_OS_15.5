//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPXEnumeratorObserver-Protocol.h>

@class NSString;
@protocol FPXEnumeratorObserver;

__attribute__((visibility("hidden")))
@interface WrappedFPXEnumeratorObserverProxy : NSObject <FPXEnumeratorObserver>
{
    id <FPXEnumeratorObserver> _target;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000007e94
- (void)didUpdateItem:(id)arg1;	// IMP=0x0000000000007db8
- (void)enumerationResultsDidChange;	// IMP=0x0000000000007d0e
- (id)initWithTarget:(id)arg1;	// IMP=0x0000000000007ca3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

