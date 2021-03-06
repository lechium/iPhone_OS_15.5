//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PFLDataSource, PFLResumable;

@interface PFLSession : NSObject
{
    id <PFLResumable> _underlyingTask;	// 8 = 0x8
    id <PFLDataSource> _dataSource;	// 16 = 0x10
}

+ (id)sessionForTesting;	// IMP=0x000000000001e9de
+ (id)sharedInstance;	// IMP=0x000000000001e989
- (void).cxx_destruct;	// IMP=0x000000000001ee5f
@property(retain, nonatomic) id <PFLDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) id <PFLResumable> underlyingTask; // @synthesize underlyingTask=_underlyingTask;
- (void)updateModel:(id)arg1 modelConfiguration:(id)arg2 layerNamesToPrivatize:(id)arg3 privatizationIdentifier:(id)arg4 privatizationNormMax:(double)arg5 privatizationNormBinCount:(unsigned long long)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000001ebeb
- (void)suspend;	// IMP=0x000000000001ebae
- (_Bool)resume;	// IMP=0x000000000001eb04
- (_Bool)registerWithSource:(id)arg1;	// IMP=0x000000000001ea27
- (id)init;	// IMP=0x000000000001e9f8

@end

