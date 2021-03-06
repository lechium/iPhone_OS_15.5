//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Rapport/NSSecureCoding-Protocol.h>

@class NSString;

@interface RPRemoteDisplayDevice <NSSecureCoding>
{
    unsigned int _flags;	// 144 = 0x90
    NSString *_persistentIdentifier;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004cc7e
- (void).cxx_destruct;	// IMP=0x000000000004d529
@property(copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=_flags;
- (unsigned int)updateWithEndpoint:(id)arg1;	// IMP=0x000000000004d115
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000000004ce23
- (id)description;	// IMP=0x000000000004ce0c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004cd72
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004cc86

@end

