//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/PKTextInputDebugStateReporting-Protocol.h>

@class NSMutableArray, NSString;

@interface PKTextInputDebugLogController : NSObject <PKTextInputDebugStateReporting>
{
    NSMutableArray *__logEntries;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003c05a
- (id)debugStateDetailViewController;	// IMP=0x000000000003c00c
- (_Bool)debugStateCanDisplayDetails;	// IMP=0x000000000003c004
- (void)reportDebugStateDescription:(CDUnknownBlockType)arg1;	// IMP=0x000000000003be28
- (id)init;	// IMP=0x000000000003b9b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
