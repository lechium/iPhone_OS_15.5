//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface LSPlugInQuery
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ed2fd
+ (id)pluginQueryWithURL:(id)arg1;	// IMP=0x00000000000ec9bc
+ (id)pluginQueryWithUUID:(id)arg1;	// IMP=0x00000000000ec930
+ (id)pluginQueryWithIdentifier:(id)arg1;	// IMP=0x00000000000ec8de
+ (id)pluginQueryWithQueryDictionary:(id)arg1 applyFilter:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ec86e
+ (id)pluginQuery;	// IMP=0x00000000000ec845
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ed32f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ed305
- (unsigned long long)hash;	// IMP=0x00000000000ed2ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ed25b
- (id)_init;	// IMP=0x00000000000ed192
- (_Bool)_requiresDatabaseMappingEntitlement;	// IMP=0x00000000000ed18a
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ece81
- (void)sort:(_Bool)arg1 pluginIDs:(id)arg2 andYield:(CDUnknownBlockType)arg3 context:(struct LSContext *)arg4;	// IMP=0x00000000000eca11
- (_Bool)_remoteResolutionIsExpensive;	// IMP=0x00000000000eca09

@end
