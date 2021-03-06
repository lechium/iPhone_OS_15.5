//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TRIPaths;

@interface TRILogTreatmentReader : NSObject
{
    int _projectId;	// 8 = 0x8
    id <TRIPaths> _paths;	// 16 = 0x10
}

+ (id)readerWithProjectId:(int)arg1 paths:(id)arg2;	// IMP=0x000000000000a0bc
- (void).cxx_destruct;	// IMP=0x000000000000a588
- (id)fetchRolloutLogNamespaces;	// IMP=0x000000000000a4a0
- (id)treatments;	// IMP=0x000000000000a387
- (id)namespaceLoggingTreatmentPath;	// IMP=0x000000000000a2b9
@property(readonly) NSString *path;
- (id)initWithProjectId:(int)arg1 paths:(id)arg2;	// IMP=0x000000000000a125

@end

