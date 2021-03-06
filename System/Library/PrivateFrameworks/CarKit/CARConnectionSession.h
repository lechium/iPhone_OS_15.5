//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface CARConnectionSession : NSObject <NSSecureCoding>
{
    NSArray *_events;	// 8 = 0x8
    NSUUID *_sessionIdentifier;	// 16 = 0x10
    NSString *_transportType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007eef
- (void).cxx_destruct;	// IMP=0x000000000000822c
@property(readonly, nonatomic) NSString *transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) NSArray *events; // @synthesize events=_events;
- (id)allEventsOfTypes:(id)arg1;	// IMP=0x000000000000812d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000804a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007ef7
- (id)initWithEvents:(id)arg1 sessionIdentifier:(id)arg2 transportType:(id)arg3;	// IMP=0x0000000000007e38

@end

