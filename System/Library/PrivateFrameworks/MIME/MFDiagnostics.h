//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MIME/MFDiagnosticsGenerator-Protocol.h>

@class MFWeakSet, NSLock, NSString;

@interface MFDiagnostics : NSObject <MFDiagnosticsGenerator>
{
    MFWeakSet *_diagnosticsGenerators;	// 8 = 0x8
    NSLock *_diagnosticLock;	// 16 = 0x10
}

+ (id)sharedController;	// IMP=0x0000000000018bdf
- (void).cxx_destruct;	// IMP=0x0000000000019110
- (id)copyDiagnosticInformation;	// IMP=0x0000000000018d94
- (void)removeDiagnosticsGenerator:(id)arg1;	// IMP=0x0000000000018d27
- (void)addDiagnosticsGenerator:(id)arg1;	// IMP=0x0000000000018cba
- (id)init;	// IMP=0x0000000000018c34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
