//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGEntityKey-Protocol.h>

@class NSString;

@interface SGSchemaOrgKey : NSObject <SGEntityKey>
{
    NSString *_uuid;	// 8 = 0x8
}

+ (_Bool)isSupportedEntityType:(long long)arg1;	// IMP=0x000000000012a2b5
- (void).cxx_destruct;	// IMP=0x000000000012a2a5
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToSchemaOrgKey:(id)arg1;	// IMP=0x000000000012a227
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012a1bf
- (id)initWithSerialized:(id)arg1;	// IMP=0x000000000012a154
- (id)init;	// IMP=0x000000000012a0a5
- (id)serialize;	// IMP=0x000000000012a097

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

