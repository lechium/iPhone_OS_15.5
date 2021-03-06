//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNResult-Protocol.h>

@class NSError, NSString;

@interface SNFileDeletionResult : NSObject <SNResult>
{
    NSString *_fileName;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000a62b
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (id)initWithFileName:(id)arg1 error:(id)arg2;	// IMP=0x000000000000a557

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

