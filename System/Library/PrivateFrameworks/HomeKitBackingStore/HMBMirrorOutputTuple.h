//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBLocalSQLQueryTable, HMBModel, NSData;

@interface HMBMirrorOutputTuple : HMFObject
{
    HMBModel *_model;	// 8 = 0x8
    NSData *_externalID;	// 16 = 0x10
    NSData *_externalData;	// 24 = 0x18
    HMBLocalSQLQueryTable *_queryTable;	// 32 = 0x20
    unsigned long long _recordRow;	// 40 = 0x28
    unsigned long long _outputBlockRow;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000005d919
@property(readonly) unsigned long long outputBlockRow; // @synthesize outputBlockRow=_outputBlockRow;
@property(readonly) unsigned long long recordRow; // @synthesize recordRow=_recordRow;
@property(readonly, nonatomic) HMBLocalSQLQueryTable *queryTable; // @synthesize queryTable=_queryTable;
@property(copy, nonatomic) NSData *externalData; // @synthesize externalData=_externalData;
@property(copy, nonatomic) NSData *externalID; // @synthesize externalID=_externalID;
@property(readonly, nonatomic) HMBModel *model; // @synthesize model=_model;
- (id)attributeDescriptions;	// IMP=0x000000000005d588
- (id)initWithOutputBlockRow:(unsigned long long)arg1 recordRow:(unsigned long long)arg2 model:(id)arg3 queryTable:(id)arg4 externalID:(id)arg5 externalData:(id)arg6;	// IMP=0x000000000005d476

@end

