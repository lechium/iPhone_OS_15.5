//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTBatchRecoverFinalResponse : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct BatchRecoverFinalResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000885fc
- (id)flatbuffData;	// IMP=0x0000000000088484
- (Offset_469a18c2)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000881e4
@property(readonly, nonatomic) int num_of_succeeded;
@property(readonly, nonatomic) int num_of_processed;
@property(readonly, nonatomic) int num_of_requested;
@property(readonly, nonatomic) NSString *error_str;
@property(readonly, nonatomic) int error_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000087ffe
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchRecoverFinalResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000087e30
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchRecoverFinalResponse *)arg2;	// IMP=0x0000000000087e1a
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000087dff
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000087de7

@end
