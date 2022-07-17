//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuickLookThumbnailing/NSSecureCoding-Protocol.h>
#import <QuickLookThumbnailing/PQLResultSetInitializer-Protocol.h>

@class NSData, NSDate, NSString, NSURL;

@interface QLThumbnailAdditionEntry : NSObject <PQLResultSetInitializer, NSSecureCoding>
{
    unsigned long long _documentID;	// 8 = 0x8
    long long _size;	// 16 = 0x10
    NSDate *_lastHitDate;	// 24 = 0x18
    NSURL *_lastSeenURL;	// 32 = 0x20
    NSData *_vol_uuid;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000022c37
- (void).cxx_destruct;	// IMP=0x0000000000022d97
@property(retain) NSData *vol_uuid; // @synthesize vol_uuid=_vol_uuid;
@property(retain) NSURL *lastSeenURL; // @synthesize lastSeenURL=_lastSeenURL;
@property(retain) NSDate *lastHitDate; // @synthesize lastHitDate=_lastHitDate;
@property long long size; // @synthesize size=_size;
@property unsigned long long documentID; // @synthesize documentID=_documentID;
@property(readonly) NSString *unparsedVolumeUUID;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000022ab1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000022986
- (id)initFromPQLResultSet:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000022dca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
