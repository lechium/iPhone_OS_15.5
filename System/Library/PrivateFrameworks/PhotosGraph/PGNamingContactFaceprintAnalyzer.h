//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGNamingAnalyzer-Protocol.h>

@class NSString, PGGraphNamingProcessor;

@interface PGNamingContactFaceprintAnalyzer : NSObject <PGNamingAnalyzer>
{
    PGGraphNamingProcessor *_processor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003caf31
- (void)runAnalysisWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003cad10
- (id)initWithNamingProcessor:(id)arg1;	// IMP=0x00000000003cacac
- (id)name;	// IMP=0x00000000003cac9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
