//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalIntelligenceCore/BMStoreData-Protocol.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC24PersonalIntelligenceCore13MetricMessage : NSObject <BMStoreData>
{
    MISSING_TYPE *backend;	// 8 = 0x8
    MISSING_TYPE *messageIdentifier;	// 16 = 0x10
    MISSING_TYPE *messageContents;	// 32 = 0x20
    MISSING_TYPE *dataVersion;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_codableArray;	// 48 = 0x30
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000005b03
- (void).cxx_destruct;	// IMP=0x0000000000005e27
- (id)init;	// IMP=0x0000000000005df4
- (id)json;	// IMP=0x0000000000005d5a
- (id)serialize;	// IMP=0x0000000000005c03
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) unsigned int dataVersion; // @synthesize dataVersion;

@end

