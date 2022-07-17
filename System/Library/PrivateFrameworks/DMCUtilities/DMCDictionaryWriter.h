//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DMCFileAccessRepairTool, NSDictionary, NSError, NSString;

@interface DMCDictionaryWriter : NSObject
{
    DMCFileAccessRepairTool *_repairTool;	// 8 = 0x8
    NSDictionary *_dictionary;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
    NSError *_serializeError;	// 32 = 0x20
    NSError *_writeError;	// 40 = 0x28
    NSError *_beforeWriteRepairError;	// 48 = 0x30
    NSError *_afterWriteRepairError;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000017c2d
@property(retain, nonatomic) DMCFileAccessRepairTool *repairTool; // @synthesize repairTool=_repairTool;
@property(copy, nonatomic) NSError *afterWriteRepairError; // @synthesize afterWriteRepairError=_afterWriteRepairError;
@property(copy, nonatomic) NSError *beforeWriteRepairError; // @synthesize beforeWriteRepairError=_beforeWriteRepairError;
@property(copy, nonatomic) NSError *writeError; // @synthesize writeError=_writeError;
@property(copy, nonatomic) NSError *serializeError; // @synthesize serializeError=_serializeError;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (_Bool)repairAccessIfNecessaryWithError:(id *)arg1;	// IMP=0x0000000000017a7d
- (_Bool)writeData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000179bc
- (void)serializeDataAndWriteToStorage;	// IMP=0x0000000000017875
- (void)logResultOfWrite;	// IMP=0x0000000000017371
- (void)logStartOfWrite;	// IMP=0x000000000001726c
- (_Bool)didWriteSucceed;	// IMP=0x00000000000171d1
- (_Bool)write;	// IMP=0x000000000001717c
- (id)serializedData;	// IMP=0x00000000000170c9
- (id)createRepairTool;	// IMP=0x00000000000170b0
- (void)reset;	// IMP=0x000000000001701a
- (id)initWithDictionary:(id)arg1 path:(id)arg2;	// IMP=0x0000000000016f4b

@end
