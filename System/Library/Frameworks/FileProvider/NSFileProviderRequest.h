//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProvider/NSSecureCoding-Protocol.h>

@class NSFileProviderDomainVersion, NSURL, NSUUID;

@interface NSFileProviderRequest : NSObject <NSSecureCoding>
{
    NSURL *_requestingExecutable;	// 8 = 0x8
    NSFileProviderDomainVersion *_domainVersion;	// 16 = 0x10
    NSUUID *_requestingApplicationIdentifier;	// 24 = 0x18
}

+ (id)requestFromTheSystem;	// IMP=0x00000000000d84e5
+ (id)_dsIdentifier;	// IMP=0x00000000000d834f
+ (id)_finderIdentifier;	// IMP=0x00000000000d831f
+ (id)_fpdIdentifier;	// IMP=0x00000000000d82ef
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d82e7
- (void).cxx_destruct;	// IMP=0x00000000000d85b3
@property(retain, nonatomic) NSUUID *requestingApplicationIdentifier; // @synthesize requestingApplicationIdentifier=_requestingApplicationIdentifier;
@property(retain, nonatomic) NSFileProviderDomainVersion *domainVersion; // @synthesize domainVersion=_domainVersion;
@property(copy, nonatomic) NSURL *requestingExecutable; // @synthesize requestingExecutable=_requestingExecutable;
- (id)init;	// IMP=0x00000000000d84fe
@property(readonly, nonatomic) _Bool isFileViewerRequest;
@property(readonly, nonatomic) _Bool isSystemRequest;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d8279
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d819f

@end

