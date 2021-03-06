//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGNamingAnalyzer-Protocol.h>

@class NSString, PGGraphNamingProcessor;

@interface PGNamingRelationshipAnalyzer : NSObject <PGNamingAnalyzer>
{
    PGGraphNamingProcessor *_processor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001d9355
- (id)name;	// IMP=0x00000000001d9348
- (void)findRelationshipMatchesFromContactIdentifiersByRelationship:(id)arg1 graph:(id)arg2 withProgressBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d8e38
- (void)runAnalysisWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d886d
- (id)initWithNamingProcessor:(id)arg1;	// IMP=0x00000000001d8809

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

