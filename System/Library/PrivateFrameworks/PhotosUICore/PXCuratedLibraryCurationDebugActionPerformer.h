//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXGLayout;

@interface PXCuratedLibraryCurationDebugActionPerformer
{
    PXGLayout *_layoutForDiagnosticDescription;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004165f5
@property(readonly, nonatomic) __weak PXGLayout *layoutForDiagnosticDescription; // @synthesize layoutForDiagnosticDescription=_layoutForDiagnosticDescription;
- (void)performUserInteractionTask;	// IMP=0x0000000000416459
- (_Bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;	// IMP=0x0000000000416357
- (id)activitySystemImageName;	// IMP=0x000000000041634a
- (id)activityType;	// IMP=0x000000000041632b
- (id)initWithViewModel:(id)arg1 assetCollectionReference:(id)arg2 diagnosticLayout:(id)arg3;	// IMP=0x00000000004162a9

@end

