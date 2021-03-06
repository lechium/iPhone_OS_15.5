//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OSAServicesClient/OSADiagnosticEventObserver-Protocol.h>
#import <OSAServicesClient/OSADiagnosticWriteObserver-Protocol.h>

@class NSString;
@protocol OSADiagnosticObserver;

@interface ObserverShim : NSObject <OSADiagnosticEventObserver, OSADiagnosticWriteObserver>
{
    id <OSADiagnosticObserver> _observer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000043d6
@property(readonly, nonatomic) __weak id <OSADiagnosticObserver> observer; // @synthesize observer=_observer;
- (void)failedToWriteDiagnosticLog:(id)arg1 ofType:(id)arg2 error:(id)arg3;	// IMP=0x0000000000004328
- (void)didWriteDiagnosticLog:(id)arg1 ofType:(id)arg2 toPath:(id)arg3;	// IMP=0x000000000000428c
- (void)willWriteDiagnosticLog:(id)arg1 ofType:(id)arg2;	// IMP=0x0000000000004286
- (void)didReceiveDiagnosticLog:(id)arg1 ofType:(id)arg2 details:(id)arg3;	// IMP=0x00000000000041f9
- (_Bool)matches:(id)arg1;	// IMP=0x00000000000041aa
- (id)initWithObserver:(id)arg1;	// IMP=0x0000000000004146

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

