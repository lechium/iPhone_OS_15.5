//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CVNLPPerformance, NSDictionary;

@interface CVNLPModelBase : NSObject
{
    CVNLPPerformance *_perfResults;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002ecf0
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) CVNLPPerformance *perfResults; // @synthesize perfResults=_perfResults;
- (id)performanceResults;	// IMP=0x000000000002ec60
- (void)_copy_data_to_blob_repeated:(id)arg1 to:(CDStruct_0a65202a)arg2;	// IMP=0x000000000002ea70
- (void)_copy_data_to_blob:(id)arg1 toBuffer:(CDStruct_0a65202a)arg2;	// IMP=0x000000000002e9c0
- (void)_copy_data_to_blob:(float *)arg1 to:(CDStruct_0a65202a)arg2;	// IMP=0x000000000002e960
- (void)_copy_data_from_blob:(CDStruct_0a65202a)arg1 toPtr:(float *)arg2;	// IMP=0x000000000002e900
- (void)_copy_data_from_blob:(CDStruct_0a65202a)arg1 to:(void *)arg2;	// IMP=0x000000000002e880
- (unsigned long long)_blob_size:(CDStruct_0a65202a)arg1;	// IMP=0x000000000002e860
- (id)initWithOptions:(id)arg1;	// IMP=0x000000000002e780

@end
