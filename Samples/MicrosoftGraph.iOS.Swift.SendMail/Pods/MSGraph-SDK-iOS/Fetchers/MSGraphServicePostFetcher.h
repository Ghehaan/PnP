/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Corporation. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#ifndef MSGRAPHSERVICEPOSTFETCHER_H
#define MSGRAPHSERVICEPOSTFETCHER_H

#import "MSGraphServiceModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSGraphServiceItemBodyFetcher;
@class MSGraphServiceRecipientFetcher;
@class MSGraphServiceRecipientCollectionFetcher;
@class MSGraphServiceAttachmentCollectionFetcher;
@class MSGraphServiceAttachmentCollectionFetcher;
@class MSGraphServiceAttachmentFetcher;
@class MSGraphServicePostOperations;


/** MSGraphServicePostFetcher
 *
 */
@interface MSGraphServicePostFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSGraphServicePostOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSGraphServicePost *, MSOrcError *))callback;
- (void)update:(MSGraphServicePost *)post callback:(void (^)(MSGraphServicePost *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSGraphServicePostFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphServicePostFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSGraphServicePostFetcher *)select:(NSString *)params;
- (MSGraphServicePostFetcher *)expand:(NSString *)value;

@property (strong, nonatomic, readonly, getter=inReplyTo) MSGraphServicePostFetcher *inReplyTo;
@property (strong, nonatomic, readonly, getter=attachments) MSGraphServiceAttachmentCollectionFetcher *attachments;

- (MSGraphServiceAttachmentFetcher *)attachmentsById:(id)identifier;


@end

#endif