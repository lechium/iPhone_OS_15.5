//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriOntology/SIRINLUUserDialogAct-Protocol.h>

@class NSUUID, USOSerializedGraph;

@interface SIRINLUUserAccepted : NSObject <SIRINLUUserDialogAct>
{
    NSUUID *_offerId;	// 8 = 0x8
    USOSerializedGraph *_reference;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007c36
- (void).cxx_destruct;	// IMP=0x0000000000007ef5
@property(retain, nonatomic) USOSerializedGraph *reference; // @synthesize reference=_reference;
@property(retain, nonatomic) NSUUID *offerId; // @synthesize offerId=_offerId;
- (id)description;	// IMP=0x0000000000007dc6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007d18
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007c3e
- (id)initWithOfferId:(id)arg1 reference:(id)arg2;	// IMP=0x0000000000007b9d
- (id)init;	// IMP=0x0000000000007b6e

@end
