//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BrailleTranslation/BRLTPrintPreprocessor-Protocol.h>

@class NSString;

@interface BRLTUnicodePrintPreprocessor : NSObject <BRLTPrintPreprocessor>
{
}

- (id)preprocessPrintString:(id)arg1 withLocationMap:(id *)arg2 isEightDot:(_Bool)arg3;	// IMP=0x0000000000003b08
- (id)preprocessPrintString:(id)arg1 withLocationMap:(id *)arg2;	// IMP=0x0000000000003af3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
