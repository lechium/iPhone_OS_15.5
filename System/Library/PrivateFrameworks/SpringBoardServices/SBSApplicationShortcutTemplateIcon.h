//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SBSApplicationShortcutTemplateIcon
{
    NSString *_templateImageName;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000305bd
@property(readonly, nonatomic) NSString *templateImageName; // @synthesize templateImageName=_templateImageName;
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x000000000003053f
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x00000000000304d5
- (unsigned long long)hash;	// IMP=0x0000000000030445
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003030e
- (id)_initForSubclass;	// IMP=0x0000000000030282
- (id)initWithTemplateImageName:(id)arg1;	// IMP=0x0000000000030208

@end

