//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HumanUnderstandingEvidence/BMStoreData-Protocol.h>

@class MISSING_TYPE;

@interface _TtC26HumanUnderstandingEvidence20PeopleDiscoveryEvent : NSObject <BMStoreData>
{
    MISSING_TYPE *peopleDiscovered;	// 8 = 0x8
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000003873
- (void).cxx_destruct;	// IMP=0x0000000000003c18
- (id)init;	// IMP=0x0000000000003be5
- (id)json;	// IMP=0x0000000000003b2f
- (id)serialize;	// IMP=0x00000000000039b8
@property(nonatomic, readonly) unsigned int dataVersion;

@end

