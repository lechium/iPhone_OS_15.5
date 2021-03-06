//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFPBCodable-Protocol.h>

@class NSString;

@interface WFRemoteExecutionRequest : NSObject <WFPBCodable>
{
    long long _minimumSupportedVersion;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    long long _version;	// 24 = 0x18
}

+ (long long)version;	// IMP=0x0000000000191313
+ (_Bool)supportsVersion:(long long)arg1;	// IMP=0x00000000001912f0
+ (id)unsupportedVersionError;	// IMP=0x00000000001911d2
+ (_Bool)isUnsupportedVersionError:(id)arg1;	// IMP=0x00000000001910ee
+ (id)identifierFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000190f67
- (void).cxx_destruct;	// IMP=0x0000000000190f57
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long minimumSupportedVersion; // @synthesize minimumSupportedVersion=_minimumSupportedVersion;
- (id)emptyProtobufError;	// IMP=0x0000000000190e6a
- (_Bool)writeTo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000190c86
- (_Bool)readFrom:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001909b7
- (id)writeMessageToWriter:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000190988
- (_Bool)readMessageFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000190959
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000190893
- (id)init;	// IMP=0x00000000001907ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

