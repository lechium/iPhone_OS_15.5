//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFTestRequestOptionsMutating-Protocol.h>

@class AFTestRequestOptions, NSNumber, NSString;

@interface _AFTestRequestOptionsMutation : NSObject <AFTestRequestOptionsMutating>
{
    AFTestRequestOptions *_baseModel;	// 8 = 0x8
    long long _requestPath;	// 16 = 0x10
    NSString *_inputOrigin;	// 24 = 0x18
    NSNumber *_isEyesFree;	// 32 = 0x20
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasRequestPath:1;
        unsigned int hasInputOrigin:1;
        unsigned int hasIsEyesFree:1;
    } _mutationFlags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001c4d5
- (id)generate;	// IMP=0x000000000001c3a7
- (void)setIsEyesFree:(id)arg1;	// IMP=0x000000000001c387
- (void)setInputOrigin:(id)arg1;	// IMP=0x000000000001c367
- (void)setRequestPath:(long long)arg1;	// IMP=0x000000000001c359
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000000001c2ee
- (id)init;	// IMP=0x000000000001c2da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

