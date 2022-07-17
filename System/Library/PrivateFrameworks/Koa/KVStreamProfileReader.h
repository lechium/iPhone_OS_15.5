//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Koa/KVProfileReader-Protocol.h>

@class KVProfileInfo, NSData, NSString;

@interface KVStreamProfileReader : NSObject <KVProfileReader>
{
    NSData *_data;	// 8 = 0x8
    KVProfileInfo *_profileInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000ed61
@property(readonly, copy) NSString *description;
- (id)profileInfo;	// IMP=0x000000000000ece4
- (_Bool)enumerateDatasetsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e8b2
- (id)initWithData:(id)arg1 profileInfo:(id)arg2;	// IMP=0x000000000000e7fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
