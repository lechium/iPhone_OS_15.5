//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface EDAMInvalidContactsException
{
    NSArray *_contacts;	// 40 = 0x28
    NSString *_parameter;	// 48 = 0x30
    NSArray *_reasons;	// 56 = 0x38
}

+ (id)structFields;	// IMP=0x00000000002fa555
+ (id)structName;	// IMP=0x00000000002fa548
- (void).cxx_destruct;	// IMP=0x00000000002fa790
@property(retain, nonatomic) NSArray *reasons; // @synthesize reasons=_reasons;
@property(retain, nonatomic) NSString *parameter; // @synthesize parameter=_parameter;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;

@end

